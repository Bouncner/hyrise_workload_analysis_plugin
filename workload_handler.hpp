#pragma once

#include "utils/abstract_plugin.hpp"
#include "utils/meta_tables/abstract_meta_table.hpp"
#include "utils/singleton.hpp"


namespace opossum {

class MetaWorkloadItems : public AbstractMetaTable {
 public:
  MetaWorkloadItems();
  const std::string& name() const final;

 protected:
  std::shared_ptr<Table> _on_generate() const final;
};

class WorkloadHandlerPlugin : public AbstractPlugin, public Singleton<WorkloadHandlerPlugin> {
 public:
  WorkloadHandlerPlugin();
  std::string description() const final;
  void start() final;
  void stop() final;
};

}  // namespace opossum